#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class RigBuilder; }
class EntityCompositionData;
namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCTRAP_REBIND_OFFSET UNITYSDK_OFFSET(0xD88A00)
#define MXUNDERCOVER_UCTRAP_EXECUTEDEFUSEINTERNAL_OFFSET UNITYSDK_OFFSET(0xD88A10)
#define MXUNDERCOVER_UCTRAP_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD891A0)
#define MXUNDERCOVER_UCTRAP_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD89200)
#define MXUNDERCOVER_UCTRAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xD89210)
#define MXUNDERCOVER_UCTRAP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD89220)
#define MXUNDERCOVER_UCTRAP_SET_ISDEFUSED_OFFSET UNITYSDK_OFFSET(0xD892C0)
#define MXUNDERCOVER_UCTRAP_EXECUTEDEFUSE_OFFSET UNITYSDK_OFFSET(0xD892D0)
#define MXUNDERCOVER_UCTRAP_GET_ISDEFUSED_OFFSET UNITYSDK_OFFSET(0xD892E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCTrap_TypeDefinitionIndex = 9691;

	class UCTrap : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::Rigging::RigBuilder* rig; // 0x30
		::System::Boolean _IsDefused_k__BackingField; // 0x38

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_REBIND_OFFSET))(nullptr);
		}

		::System::Void ExecuteDefuseInternal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_EXECUTEDEFUSEINTERNAL_OFFSET))(arg, nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_IsDefused(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_SET_ISDEFUSED_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteDefuse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_EXECUTEDEFUSE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCTRAP_GET_ISDEFUSED_OFFSET))(nullptr);
		}

	};
}

