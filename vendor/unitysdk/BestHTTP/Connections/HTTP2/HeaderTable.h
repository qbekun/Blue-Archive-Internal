#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsRegistry; }

#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x90A350)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_SET_MAXDYNAMICTABLESIZE_OFFSET UNITYSDK_OFFSET(0x90A550)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GET_DYNAMICTABLESIZE_OFFSET UNITYSDK_OFFSET(0x90A560)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_SET_DYNAMICTABLESIZE_OFFSET UNITYSDK_OFFSET(0x90A570)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GETINDEX_OFFSET UNITYSDK_OFFSET(0x90A580)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GETKEY_OFFSET UNITYSDK_OFFSET(0x90A8E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GET_MAXDYNAMICTABLESIZE_OFFSET UNITYSDK_OFFSET(0x90AA20)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90AA30)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90AD10)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_CALCULATEENTRYSIZE_OFFSET UNITYSDK_OFFSET(0x90A3E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GETHEADER_OFFSET UNITYSDK_OFFSET(0x90C990)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CB40)
#define BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_EVICTENTRIES_OFFSET UNITYSDK_OFFSET(0x90A470)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HeaderTable_TypeDefinitionIndex = 23435;

	class HeaderTable : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* StaticTableValues; // 0x0
		::Il2CppArray<::System::Object*>* StaticTable; // 0x8
		::System::UInt32 _DynamicTableSize_k__BackingField; // 0x10
		::System::UInt32 _maxDynamicTableSize; // 0x14
		Il2CppObject* DynamicTable; // 0x18
		::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* settingsRegistry; // 0x20

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaxDynamicTableSize(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_SET_MAXDYNAMICTABLESIZE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_DynamicTableSize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GET_DYNAMICTABLESIZE_OFFSET))(nullptr);
		}

		::System::Void set_DynamicTableSize(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_SET_DYNAMICTABLESIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetIndex(::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GETINDEX_OFFSET))(str, str, nullptr);
		}

		::System::String* GetKey(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_MaxDynamicTableSize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GET_MAXDYNAMICTABLESIZE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::UInt32 CalculateEntrySize(Il2CppObject* arg)
		{
			return (return (::System::UInt32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_CALCULATEENTRYSIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetHeader(::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_GETHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void EvictEntries(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HEADERTABLE_EVICTENTRIES_OFFSET))(arg, nullptr);
		}

	};
}

