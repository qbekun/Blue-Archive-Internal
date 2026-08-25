#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStageSetting; }

#define MXUNDERCOVER_UCSTAGEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBD8A0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCStageAsset_TypeDefinitionIndex = 9997;

	class UCStageAsset : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStageSetting* StageSettings; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

