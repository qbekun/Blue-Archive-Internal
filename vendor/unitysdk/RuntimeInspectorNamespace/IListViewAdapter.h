#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class RecycledListItem; }
namespace UnityEngine { class Transform; }

#define RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_SETITEMCONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_GET_ITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_ONITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int IListViewAdapter_TypeDefinitionIndex = 35718;

	class IListViewAdapter : public Il2CppObject
	{
	public:
		::System::Void SetItemContent(::RuntimeInspectorNamespace::RecycledListItem* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RecycledListItem*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_SETITEMCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Single get_ItemHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_GET_ITEMHEIGHT_OFFSET))(nullptr);
		}

		::System::Void OnItemClicked(::RuntimeInspectorNamespace::RecycledListItem* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RecycledListItem*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_ONITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::RecycledListItem* CreateItem(::UnityEngine::Transform* arg)
		{
			return (return (::RuntimeInspectorNamespace::RecycledListItem*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_CREATEITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ILISTVIEWADAPTER_GET_COUNT_OFFSET))(nullptr);
		}

	};
}

