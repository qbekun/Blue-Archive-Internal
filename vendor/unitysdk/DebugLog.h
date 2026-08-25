#pragma once
#include "unitysdk.h"

class DebugLogType;
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class SkillUseParameter; }

#define DEBUGLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA6060)
#define DEBUGLOG_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xDA6080)

	inline static constexpr unsigned int DebugLog_TypeDefinitionIndex = 9856;

	class DebugLog : public Il2CppObject
	{
	public:
		DebugLogType* LogType; // 0x38
		::System::String* Message; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGLOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg, ::MXUnderCover::SkillUseParameter* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGLOG_CO_INTERNALINVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

