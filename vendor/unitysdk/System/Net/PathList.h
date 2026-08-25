#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_PATHLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A5A320)
#define SYSTEM_NET_PATHLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9A5CFB0)
#define SYSTEM_NET_PATHLIST_GETCOOKIESCOUNT_OFFSET UNITYSDK_OFFSET(0x9A5A3D0)
#define SYSTEM_NET_PATHLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9A5CDC0)
#define SYSTEM_NET_PATHLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9A5A8D0)
#define SYSTEM_NET_PATHLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9A5A900)
#define SYSTEM_NET_PATHLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9A5EBD0)
#define SYSTEM_NET_PATHLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9A5A8A0)

namespace System::Net
{
	inline static constexpr unsigned int PathList_TypeDefinitionIndex = 29739;

	class PathList : public Il2CppObject
	{
	public:
		::System::Collections::SortedList* m_list; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetCookiesCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GETCOOKIESCOUNT_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_PATHLIST_GET_SYNCROOT_OFFSET))(nullptr);
		}

	};
}

