#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MXUnderCover::Animation { class UCNPCAniController; }
namespace MXUnderCover { class UCEntityModel; }
namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionModel; }
namespace MXUnderCover { class UCEntityTypes; }

#define MXUNDERCOVER_UCNPC_GET_NPCANICONTROLLER_OFFSET UNITYSDK_OFFSET(0xD89700)
#define MXUNDERCOVER_UCNPC_GET_SIGHTS_OFFSET UNITYSDK_OFFSET(0xD89740)
#define MXUNDERCOVER_UCNPC_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD89780)
#define MXUNDERCOVER_UCNPC_UPDATE_OFFSET UNITYSDK_OFFSET(0xD897D0)
#define MXUNDERCOVER_UCNPC_.CTOR_OFFSET UNITYSDK_OFFSET(0xD89890)
#define MXUNDERCOVER_UCNPC_EXTRACTMODEL_OFFSET UNITYSDK_OFFSET(0xD898E0)
#define MXUNDERCOVER_UCNPC_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD89970)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCNPC_TypeDefinitionIndex = 9694;

	class UCNPC : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* velocity; // 0x90
		::UnityEngine::Vector3* prevPosition; // 0x9C

		::MXUnderCover::Animation::UCNPCAniController* get_NPCAniController()
		{
			return ((::MXUnderCover::Animation::UCNPCAniController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCNPC_GET_NPCANICONTROLLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_sights()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCNPC_GET_SIGHTS_OFFSET))(nullptr);
		}

		::System::Void OnInitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCNPC_ONINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCNPC_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCNPC_.CTOR_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntityModel* ExtractModel(::MXUnderCover::UCStage* arg, ::MXUnderCover::UCSectionModel* arg2)
		{
			return ((::MXUnderCover::UCEntityModel*(*)(::MXUnderCover::UCStage*, ::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCNPC_EXTRACTMODEL_OFFSET))(arg, arg2, nullptr);
		}

		::MXUnderCover::UCEntityTypes* get_Type()
		{
			return ((::MXUnderCover::UCEntityTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCNPC_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

