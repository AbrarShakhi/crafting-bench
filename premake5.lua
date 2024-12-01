workspace "craftingbench"
   architecture "x64"
   startproject "class"
   configurations { "debug", "final", "submit"}
   kind "ConsoleApp"

   targetname "x%{prj.name}"
   targetdir ".out"
   objdir ".out/obj"

   filter "configurations:debug"
      defines { "DEBUG", "AbrarShakhi" }
      runtime "Debug"
      symbols "On"

   filter "configurations:final"
      defines { "FINAL", "NDEBUG", "AbrarShakhi" }
      runtime "Release"
      optimize "On"

   filter "configurations:submit"
      defines { "SUBMIT", "NDEBUG" }
      optimize "On"


include "cp/cp.lua"
include "class/class.lua"
include "snippet/snippet.lua"
