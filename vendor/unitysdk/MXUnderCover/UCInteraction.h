#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCTrigger; }
class IBase;
class CoroutineAsyncOperation;
namespace MXUnderCover { class UCEntity; }
class EntityCompositionData;

#define MXUNDERCOVER_UCINTERACTION_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD9C1D0)
#define MXUNDERCOVER_UCINTERACTION_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0xD9C200)
#define MXUNDERCOVER_UCINTERACTION_SYNCTOMODEL_OFFSET UNITYSDK_OFFSET(0xD9C2B0)
#define MXUNDERCOVER_UCINTERACTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD9C320)
#define MXUNDERCOVER_UCINTERACTION_REBIND_OFFSET UNITYSDK_OFFSET(0xD9C4F0)
#define MXUNDERCOVER_UCINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9C500)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCInteraction_TypeDefinitionIndex = 9828;

	class UCInteraction : public Il2CppObject
	{
	public:
		::MXUnderCover::UCTrigger* Trigger; // 0x30
		IBase* Action; // 0x38

		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTION_UNINITIALIZE_OFFSET))(nullptr);
		}

		CoroutineAsyncOperation* OnTrigger(::MXUnderCover::UCEntity* arg)
		{
			return ((CoroutineAsyncOperation*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTION_ONTRIGGER_OFFSET))(arg, nullptr);
		}

		EntityCompositionData* SyncToModel()
		{
			return ((EntityCompositionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTION_SYNCTOMODEL_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg, EntityCompositionData* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, EntityCompositionData*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTION_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Rebind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTION_REBIND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINTERACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

