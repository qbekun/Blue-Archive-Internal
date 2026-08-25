#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }

#define MX_LOGIC_DATA_BLACKBOARDSETEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackBoardSetEffectData_TypeDefinitionIndex = 13555;

	class BlackBoardSetEffectData : public Il2CppObject
	{
	public:
		::System::String* BlackBoardKey; // 0x58
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x60
		::System::Int64 SetValue; // 0x68
		::System::Int64 SetMin; // 0x70
		::System::Int64 SetMax; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSETEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

