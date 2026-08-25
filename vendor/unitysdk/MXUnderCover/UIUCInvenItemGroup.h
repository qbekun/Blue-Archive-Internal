#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UIUCINVENITEMGROUP_SETSELECTITEM_OFFSET UNITYSDK_OFFSET(0xDC98F0)
#define MXUNDERCOVER_UIUCINVENITEMGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCA760)
#define MXUNDERCOVER_UIUCINVENITEMGROUP_GET_ONCLICKITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCA820)
#define MXUNDERCOVER_UIUCINVENITEMGROUP_SET_ONCLICKITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCA830)
#define MXUNDERCOVER_UIUCINVENITEMGROUP_SETGROUP_OFFSET UNITYSDK_OFFSET(0xDC8590)
#define MXUNDERCOVER_UIUCINVENITEMGROUP_ONCLICKELEMENT_OFFSET UNITYSDK_OFFSET(0xDCA840)
#define MXUNDERCOVER_UIUCINVENITEMGROUP_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xDC8570)
#define MXUNDERCOVER_UIUCINVENITEMGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCA860)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCInvenItemGroup_TypeDefinitionIndex = 10039;

	class UIUCInvenItemGroup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* elements; // 0x18
		Il2CppObject* _OnClickItemCallback_k__BackingField; // 0x20

		::System::Void SetSelectItem(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMGROUP_SETSELECTITEM_OFFSET))(str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMGROUP_AWAKE_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnClickItemCallback()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMGROUP_GET_ONCLICKITEMCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_OnClickItemCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMGROUP_SET_ONCLICKITEMCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetGroup(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMGROUP_SETGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickElement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMGROUP_ONCLICKELEMENT_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ElementCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMGROUP_GET_ELEMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

