#pragma once
#include "unitysdk.h"

class UIWidget;
class DynamicUIContainer;
class SlotState;
namespace UnityEngine { class Vector3; }

#define DYNAMICUISLOT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x218E6A0)
#define DYNAMICUISLOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x218E760)
#define DYNAMICUISLOT_GET_OPTIONALREQUESTS_OFFSET UNITYSDK_OFFSET(0x218E7C0)
#define DYNAMICUISLOT_SETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x218DFE0)
#define DYNAMICUISLOT_GET_WIDGET_OFFSET UNITYSDK_OFFSET(0x218E7D0)
#define DYNAMICUISLOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x218E7E0)
#define DYNAMICUISLOT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x218E800)
#define DYNAMICUISLOT_GETSLOTSIZE_OFFSET UNITYSDK_OFFSET(0x218D820)
#define DYNAMICUISLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x218E810)
#define DYNAMICUISLOT_APPLYPROGRESS_OFFSET UNITYSDK_OFFSET(0x218D1D0)

	inline static constexpr unsigned int DynamicUISlot_TypeDefinitionIndex = 4097;

	class DynamicUISlot : public Il2CppObject
	{
	public:
		::System::Int32 DefaultSize; // 0x0
		UIWidget* _widget; // 0x18
		::System::Int32 _priority; // 0x20
		::Il2CppArray<::System::Object*>* _optionalRequests; // 0x28
		DynamicUIContainer* _container; // 0x30
		SlotState* _stateOld; // 0x38
		SlotState* _stateEnd; // 0x54

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_ONENABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_OptionalRequests()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_GET_OPTIONALREQUESTS_OFFSET))(nullptr);
		}

		::System::Void SetTargetPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_SETTARGETPOSITION_OFFSET))(arg, nullptr);
		}

		UIWidget* get_Widget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_GET_WIDGET_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Int32 GetSlotSize(::System::Boolean arg)
		{
			return ((::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_GETSLOTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyProgress(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DYNAMICUISLOT_APPLYPROGRESS_OFFSET))(arg, nullptr);
		}

	};

