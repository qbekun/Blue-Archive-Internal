#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }
class EntityCompositionData;

#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_REBIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD88000)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xD87F70)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xD9C130)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD887D0)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD9C140)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD9C150)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xD9C190)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xD9C1A0)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xD9C1B0)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITYMONOCOMPOSITION_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD9C1C0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEntityMonoComposition_TypeDefinitionIndex = 9827;

	class UCEntityMonoComposition : public Il2CppObject
	{
	public:
		::System::Int32 uniqueId; // 0x18
		::MXUnderCover::UCEntity* _Owner_k__BackingField; // 0x20
		::System::Boolean _initialized_k__BackingField; // 0x28

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_REBIND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_initialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_SET_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Int32 get_UniqueId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_ONVALIDATE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntity* get_Owner()
		{
			return ((::MXUnderCover::UCEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_GET_OWNER_OFFSET))(nullptr);
		}

		::System::Void set_Owner(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYMONOCOMPOSITION_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

