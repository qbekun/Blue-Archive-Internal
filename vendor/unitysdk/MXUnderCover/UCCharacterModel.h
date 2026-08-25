#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionModel; }

#define MXUNDERCOVER_UCCHARACTERMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7D60)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCCharacterModel_TypeDefinitionIndex = 9884;

	class UCCharacterModel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MXUnderCover::UCStage* arg, ::MXUnderCover::UCSectionModel* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::MXUnderCover::UCSectionModel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCHARACTERMODEL_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

