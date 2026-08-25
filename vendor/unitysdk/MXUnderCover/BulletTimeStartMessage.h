#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_BULLETTIMESTARTMESSAGE_SET_SKILLEFFECTLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xDBFC50)
#define MXUNDERCOVER_BULLETTIMESTARTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBF5D0)
#define MXUNDERCOVER_BULLETTIMESTARTMESSAGE_GET_SKILLEFFECTLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xDBFC60)

namespace MXUnderCover
{
	inline static constexpr unsigned int BulletTimeStartMessage_TypeDefinitionIndex = 10011;

	class BulletTimeStartMessage : public Il2CppObject
	{
	public:
		::System::String* _SkillEffectLocalizeKey_k__BackingField; // 0x10

		::System::Void set_SkillEffectLocalizeKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMESTARTMESSAGE_SET_SKILLEFFECTLOCALIZEKEY_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMESTARTMESSAGE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_SkillEffectLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BULLETTIMESTARTMESSAGE_GET_SKILLEFFECTLOCALIZEKEY_OFFSET))(nullptr);
		}

	};
}

