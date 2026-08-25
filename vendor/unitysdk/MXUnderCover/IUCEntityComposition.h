#pragma once
#include "../unitysdk.h"

class EntityCompositionData;
namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_IUCENTITYCOMPOSITION_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_IUCENTITYCOMPOSITION_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_IUCENTITYCOMPOSITION_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_IUCENTITYCOMPOSITION_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_IUCENTITYCOMPOSITION_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_IUCENTITYCOMPOSITION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover
{
	inline static constexpr unsigned int IUCEntityComposition_TypeDefinitionIndex = 9825;

	class IUCEntityComposition : public Il2CppObject
	{
	public:
		::System::Void set_UniqueId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_IUCENTITYCOMPOSITION_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UniqueId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_IUCENTITYCOMPOSITION_GET_UNIQUEID_OFFSET))(nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_IUCENTITYCOMPOSITION_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_IUCENTITYCOMPOSITION_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_IUCENTITYCOMPOSITION_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_IUCENTITYCOMPOSITION_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

