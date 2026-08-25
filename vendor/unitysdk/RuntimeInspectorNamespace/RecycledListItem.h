#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class IListViewAdapter; }

#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_SET_TAG_OFFSET UNITYSDK_OFFSET(0x9586840)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9586850)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_GET_TAG_OFFSET UNITYSDK_OFFSET(0x95868F0)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_SETADAPTER_OFFSET UNITYSDK_OFFSET(0x9586900)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9586910)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9586920)
#define RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9586930)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RecycledListItem_TypeDefinitionIndex = 35719;

	class RecycledListItem : public Il2CppObject
	{
	public:
		::System::Object* _Tag_k__BackingField; // 0x18
		::System::Int32 _Position_k__BackingField; // 0x20
		::RuntimeInspectorNamespace::IListViewAdapter* adapter; // 0x28

		::System::Void set_Tag(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_SET_TAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_ONCLICK_OFFSET))(nullptr);
		}

		::System::Object* get_Tag()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_GET_TAG_OFFSET))(nullptr);
		}

		::System::Void SetAdapter(::RuntimeInspectorNamespace::IListViewAdapter* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::IListViewAdapter*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_SETADAPTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Position(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Position()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RECYCLEDLISTITEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

