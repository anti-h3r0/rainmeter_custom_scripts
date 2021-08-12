--LuaMarquee v5.5 by Smurfier (smurfier20@gmail.com)
--This work is licensed under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.

PROPERTIES =
{
Text='';
MeasureName='';
Variable='';
Width=10;
Delimiter='  ';
}

function Initialize()
   Measures={}
   for word in string.gmatch(PROPERTIES.MeasureName,'[^|]+') do table.insert(Measures,SKIN:GetMeasure(word)) end
   OldText,NewText,Width,Timer,Pause='','',tonumber(PROPERTIES.Width),0,1
end -- function Initialize

function Update()
   local Values={}
   for i,v in ipairs(Measures) do table.insert(Values,v:GetStringValue()) end
   for word in string.gmatch(PROPERTIES.Variable,'[^|]+') do table.insert(Values,SKIN:GetVariable(word)) end
   if PROPERTIES.Text~='' then table.insert(Values,PROPERTIES.Text) end
   Text=string.gsub(#Values>0 and table.concat(Values,PROPERTIES.Delimiter) or 'Input Error!','\n',' ')
   if Text~=OldText then
      Timer,Length,OldText=0,string.len(Text),Text
      NewText=(Length>Width and string.rep(' ',Width) or '')..Text
   end
   Timer=Timer%(Length+Width)+(Length<=Width and 0 or 1)*Pause
   return string.sub(NewText,Timer,Timer+Width)
end -- function Update