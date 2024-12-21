#ifndef CPPBP_LOGH
#define CPPBP_LOGH

#include <memory>
#include <spdlog/fmt/ostr.h>
#include <spdlog/spdlog.h> //

namespace CPPBP {

class Log {
public:
    static void Init();

    static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }

private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
};

}

// Core log macros
#define CPPBP_TRACE(...) CPPBP::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define CPPBP_INFO(...) CPPBP::Log::GetCoreLogger()->info(__VA_ARGS__);
#define CPPBP_WARN(...) CPPBP::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define CPPBP_ERROR(...) CPPBP::Log::GetCoreLogger()->error(__VA_ARGS__);
#define CPPBP_CRITICAL(...) CPPBP::Log::GetCoreLogger()->critical(__VA_ARGS__);
#endif
