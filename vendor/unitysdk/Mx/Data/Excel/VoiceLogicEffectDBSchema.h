#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICELOGICEFFECTDBSCHEMA_SET_LOGICEFFECTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1CB4340)
#define MX_DATA_EXCEL_VOICELOGICEFFECTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4350)
#define MX_DATA_EXCEL_VOICELOGICEFFECTDBSCHEMA_GET_LOGICEFFECTNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1CB4360)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceLogicEffectDBSchema_TypeDefinitionIndex = 19695;

	class VoiceLogicEffectDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _LogicEffectNameHash_k__BackingField; // 0x20

		::System::Void set_LogicEffectNameHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTDBSCHEMA_SET_LOGICEFFECTNAMEHASH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 get_LogicEffectNameHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICELOGICEFFECTDBSCHEMA_GET_LOGICEFFECTNAMEHASH_OFFSET))(nullptr);
		}

	};
}

