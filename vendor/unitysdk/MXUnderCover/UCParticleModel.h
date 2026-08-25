#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionModel; }

#define MXUNDERCOVER_UCPARTICLEMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7FA0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCParticleModel_TypeDefinitionIndex = 9889;

	class UCParticleModel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MXUnderCover::UCStage* arg, ::MXUnderCover::UCSectionModel* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::MXUnderCover::UCSectionModel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPARTICLEMODEL_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

