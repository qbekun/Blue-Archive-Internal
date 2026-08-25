#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4470)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillCardSizeAppendEffectData_TypeDefinitionIndex = 13633;

	class SkillCardSizeAppendEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean IsDispellable; // 0x60
		::System::String* ThemeUIPath; // 0x68
		::System::Int32 AppendSize; // 0x70
		::System::String* AppendThumbnailPathList; // 0x78
		::System::String* DataKeyList; // 0x80
		::System::String* DataValList; // 0x88

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLCARDSIZEAPPENDEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

