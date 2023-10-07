workspace "Chico"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Chico"
	location "Chico"
	kind "SharedLib"
	language "C++"


	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")


	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"CHC_PLATFORM_WINDOWS",
			"CHC_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "CHC_DEBUG"
		symbols "On"
	
	filter "configurations:Release"
		defines "CHC_RELEASE"
		optimize "On"
	
    filter "configurations:Dist"
		defines "CHC_DIST"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")


	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Chico/vendor/spdlog/include",
		"Chico/src"
	}

	links
	{
		"Chico"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"CHC_PLATFORM_WINDOWS"
		}


	filter "configurations:Debug"
		defines "CHC_DEBUG"
		symbols "On"
	
	filter "configurations:Release"
		defines "CHC_RELEASE"
		optimize "On"
	
    filter "configurations:Dist"
		defines "CHC_DIST"
		optimize "On"