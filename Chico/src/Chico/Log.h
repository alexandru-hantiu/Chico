#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Chico {
	class CHICO_API Log
	{
	public:
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };

	private:
	static std::shared_ptr<spdlog::logger> s_CoreLogger;
	static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}
// Core log macros
#define CHC_CORE_ERROR(...)     ::Chico::Log::GetCoreLogger()->error(__VA_ARGS__);
#define CHC_CORE_TRACE(...)     ::Chico::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define CHC_CORE_WARN(...)      ::Chico::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define CHC_CORE_INFO(...)      ::Chico::Log::GetCoreLogger()->info(__VA_ARGS__);
#define CHC_CORE_CRITICAL(...)     ::Chico::Log::GetCoreLogger()->critical(__VA_ARGS__);

// Client log macros
#define CHC_ERROR(...)			::Chico::Log::GetCoreLogger()->error(__VA_ARGS__);
#define CHC_TRACE(...)			::Chico::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define CHC_WARN(...)			::Chico::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define CHC_INFO(...)			::Chico::Log::GetCoreLogger()->info(__VA_ARGS__);
#define CHC_CRITICAL(...)			::Chico::Log::GetCoreLogger()->critical(__VA_ARGS__);