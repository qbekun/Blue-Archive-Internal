#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCRuntimeObjectType; }
namespace MXUnderCover { class UCRuntimeObject; }

#define MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_CLEARALL_OFFSET UNITYSDK_OFFSET(0xDB3BE0)
#define MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_REMOVEOBJECT_OFFSET UNITYSDK_OFFSET(0xDB3F80)
#define MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDB4040)
#define MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_CO_RUNTIMEOBJECTLIFECYCLE_OFFSET UNITYSDK_OFFSET(0xDB4050)
#define MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_FINDOBJECTS_OFFSET UNITYSDK_OFFSET(0xDB4100)
#define MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDB4210)
#define MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_REGISTOBJECT_OFFSET UNITYSDK_OFFSET(0xDB4220)
#define MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB4440)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCRuntimeObjectHandler_TypeDefinitionIndex = 9972;

	class UCRuntimeObjectHandler : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x10
		Il2CppObject* RuntimeObjects; // 0x18

		::System::Void ClearAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_CLEARALL_OFFSET))(nullptr);
		}

		::System::Void RemoveObject(::MXUnderCover::UCRuntimeObjectType* arg, ::MXUnderCover::UCRuntimeObject* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCRuntimeObjectType*, ::MXUnderCover::UCRuntimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_REMOVEOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_RunTimeObjectLifeCycle(::MXUnderCover::UCRuntimeObjectType* arg, ::MXUnderCover::UCRuntimeObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCRuntimeObjectType*, ::MXUnderCover::UCRuntimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_CO_RUNTIMEOBJECTLIFECYCLE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindObjects(::MXUnderCover::UCRuntimeObjectType* arg)
		{
			return ((Il2CppObject*(*)(::MXUnderCover::UCRuntimeObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_FINDOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RegistObject(::MXUnderCover::UCRuntimeObjectType* arg, ::MXUnderCover::UCRuntimeObject* arg2)
		{
			((::System::Void(*)(::MXUnderCover::UCRuntimeObjectType*, ::MXUnderCover::UCRuntimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_REGISTOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCRUNTIMEOBJECTHANDLER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

