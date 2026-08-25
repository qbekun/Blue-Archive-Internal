#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }
class EntityCompositionData;

#define MXUNDERCOVER_UCENTITYCOMPOSITION_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0xD9C0B0)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xD9C0C0)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xD9C0D0)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9C0E0)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_REBIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD9C0F0)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD9C100)
#define MXUNDERCOVER_UCENTITYCOMPOSITION_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD9C120)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEntityComposition_TypeDefinitionIndex = 9826;

	class UCEntityComposition : public Il2CppObject
	{
	public:
		::System::Int32 uniqueId; // 0x10
		::MXUnderCover::UCEntity* _Owner_k__BackingField; // 0x18
		::System::Boolean initialized; // 0x20

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_GET_INITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_Owner(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_SET_OWNER_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCEntity* get_Owner()
		{
			return ((::MXUnderCover::UCEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_GET_OWNER_OFFSET))(nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Rebind(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_REBIND_OFFSET))(arg, nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_UniqueId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYCOMPOSITION_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

