#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_COOKIECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A58280)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9A58330)
#define SYSTEM_NET_COOKIECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9A58420)
#define SYSTEM_NET_COOKIECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x9A58970)
#define SYSTEM_NET_COOKIECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9A58D40)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9A58D70)
#define SYSTEM_NET_COOKIECOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9A58D80)
#define SYSTEM_NET_COOKIECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x9A58D90)
#define SYSTEM_NET_COOKIECOLLECTION_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9A58DC0)
#define SYSTEM_NET_COOKIECOLLECTION_GET_ISOTHERVERSIONSEEN_OFFSET UNITYSDK_OFFSET(0x9A58E80)
#define SYSTEM_NET_COOKIECOLLECTION_INTERNALADD_OFFSET UNITYSDK_OFFSET(0x9A58E90)
#define SYSTEM_NET_COOKIECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9A584F0)
#define SYSTEM_NET_COOKIECOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9A59480)
#define SYSTEM_NET_COOKIECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9A58CA0)

namespace System::Net
{
	inline static constexpr unsigned int CookieCollection_TypeDefinitionIndex = 29735;

	class CookieCollection : public Il2CppObject
	{
	public:
		::System::Int32 m_version; // 0x10
		::System::Collections::ArrayList* m_list; // 0x18
		::System::DateTime* m_TimeStamp; // 0x20
		::System::Boolean m_has_other_versions; // 0x28
		::System::Boolean m_IsReadOnly; // 0x29

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Cookie* get_Item(::System::Int32 arg)
		{
			return (return (::System::Net::Cookie*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Net::Cookie* arg)
		{
			((::System::Void(*)(::System::Net::Cookie*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Net::CookieCollection* arg)
		{
			((::System::Void(*)(::System::Net::CookieCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* TimeStamp(Stamp* arg)
		{
			return (return (::System::DateTime*(*)(Stamp*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_TIMESTAMP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOtherVersionSeen()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GET_ISOTHERVERSIONSEEN_OFFSET))(nullptr);
		}

		::System::Int32 InternalAdd(::System::Net::Cookie* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Net::Cookie*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_INTERNALADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 IndexOf(::System::Net::Cookie* arg)
		{
			return (return (::System::Int32(*)(::System::Net::Cookie*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

