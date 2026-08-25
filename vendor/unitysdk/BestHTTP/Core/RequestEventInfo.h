#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Core { class RequestEvents; }
namespace BestHTTP { class HTTPRequestStates; }

#define BESTHTTP_CORE_REQUESTEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8ECFC0)
#define BESTHTTP_CORE_REQUESTEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F2890)
#define BESTHTTP_CORE_REQUESTEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F28E0)
#define BESTHTTP_CORE_REQUESTEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F2940)
#define BESTHTTP_CORE_REQUESTEVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8F2990)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int RequestEventInfo_TypeDefinitionIndex = 23410;

	class RequestEventInfo : public Il2CppObject
	{
	public:
		::BestHTTP::HTTPRequest* SourceRequest; // 0x10
		::BestHTTP::Core::RequestEvents* Event; // 0x18
		::BestHTTP::HTTPRequestStates* State; // 0x1C
		::System::Int64 Progress; // 0x20
		::System::Int64 ProgressLength; // 0x28
		::Il2CppArray<::System::Object*>* Data; // 0x30
		::System::Int32 DataLength; // 0x38

		::System::Void .ctor(::BestHTTP::HTTPRequest* arg, ::BestHTTP::Core::RequestEvents* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::Core::RequestEvents*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPRequestStates* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPRequestStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::HTTPRequest* arg, ::BestHTTP::Core::RequestEvents* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::Core::RequestEvents*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTINFO_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::HTTPRequest* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_REQUESTEVENTINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

