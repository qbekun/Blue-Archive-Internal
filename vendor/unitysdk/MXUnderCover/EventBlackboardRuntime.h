#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class EventBlackboardRuntime; }

#define MXUNDERCOVER_EVENTBLACKBOARDRUNTIME_.CTOR_OFFSET UNITYSDK_OFFSET(0xD931E0)
#define MXUNDERCOVER_EVENTBLACKBOARDRUNTIME_CLONE_OFFSET UNITYSDK_OFFSET(0xD93590)
#define MXUNDERCOVER_EVENTBLACKBOARDRUNTIME_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD93330)
#define MXUNDERCOVER_EVENTBLACKBOARDRUNTIME_GETVALUE_OFFSET UNITYSDK_OFFSET(0xD93400)

namespace MXUnderCover
{
	inline static constexpr unsigned int EventBlackboardRuntime_TypeDefinitionIndex = 9725;

	class EventBlackboardRuntime : public Il2CppObject
	{
	public:
		Il2CppObject* bools; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDRUNTIME_.CTOR_OFFSET))(nullptr);
		}

		::MXUnderCover::EventBlackboardRuntime* Clone()
		{
			return ((::MXUnderCover::EventBlackboardRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDRUNTIME_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDRUNTIME_SETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean GetValue(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_EVENTBLACKBOARDRUNTIME_GETVALUE_OFFSET))(str, nullptr);
		}

	};
}

