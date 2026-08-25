#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Extensions { class TimerData; }

#define BESTHTTP_EXTENSIONS_TIMERDATA_ISONTIME_OFFSET UNITYSDK_OFFSET(0x8D7420)
#define BESTHTTP_EXTENSIONS_TIMERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D7490)
#define BESTHTTP_EXTENSIONS_TIMERDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8D7510)
#define BESTHTTP_EXTENSIONS_TIMERDATA_CREATENEW_OFFSET UNITYSDK_OFFSET(0x8D7680)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int TimerData_TypeDefinitionIndex = 23355;

	class TimerData : public Il2CppObject
	{
	public:
		::System::DateTime* Created; // 0x10
		::System::TimeSpan* Interval; // 0x18
		::System::Object* Context; // 0x20
		Il2CppObject* OnTimer; // 0x28

		::System::Boolean IsOnTime(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_TIMERDATA_ISONTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::TimeSpan* arg, ::System::Object* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_TIMERDATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_TIMERDATA_TOSTRING_OFFSET))(nullptr);
		}

		::BestHTTP::Extensions::TimerData* CreateNew()
		{
			return (return (::BestHTTP::Extensions::TimerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_TIMERDATA_CREATENEW_OFFSET))(nullptr);
		}

	};
}

