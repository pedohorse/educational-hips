## A super simple Visual Studio 17 template project to start playing around with HDK of Houdini 17

Note file paths.prop. You must set there the path to your houdini installation  
you can either open it in notepad as xml, or open **propertiy manager** in  
`View (Вид) --> Other Windows (Другие окна) --> Properties Manager (Диспетчер свойств)`  
there you will see property called **paths**. double click it.  
There locate `User Macros (Пользовательские Макросы)` and change value of `HoudiniPath` macro to your houdini installation dir

Note that you can use post-build event like  
`xcopy  "$(OutputPath)$(TargetFileName)" "$(SolutionDir)..\..\dso\." /Y`  
if you want to copy produced DLL somewhere where you have setup houdini to look for it.  
in this example, it copies dll 2 directories up into dso folder just because i have my usual testing projects setup in this way
