#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CB4370)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB44E0)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_SELECT_LOGICEFFECTNAMEHASHS_OFFSET UNITYSDK_OFFSET(0x1CB4520)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_SELECT_LOGICEFFECTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1CB4920)
#define MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_SELECTFIRST_LOGICEFFECTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1CB4C20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceLogicEffectExcelRepository_TypeDefinitionIndex = 19700;

	class VoiceLogicEffectExcelRepository : public ::MXUnderCover::UCInputBlocker
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_LogicEffectNameHashs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_SELECT_LOGICEFFECTNAMEHASHS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_LogicEffectNameHash(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_SELECT_LOGICEFFECTNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_LogicEffectNameHash(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTEXCELREPOSITORY_SELECTFIRST_LOGICEFFECTNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

	};
}

