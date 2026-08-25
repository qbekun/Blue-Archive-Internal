#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x972C350)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_COPYTO_OFFSET UNITYSDK_OFFSET(0x972C390)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x972C3E0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x972C420)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_NAMESEQUAL_OFFSET UNITYSDK_OFFSET(0x972C430)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x972C4D0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_LIST_OFFSET UNITYSDK_OFFSET(0x972C4E0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x972C4F0)
#define SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x972C500)

namespace System::Data
{
	inline static constexpr unsigned int InternalDataCollectionBase_TypeDefinitionIndex = 32191;

	class InternalDataCollectionBase : public Il2CppObject
	{
	public:
		::System::ComponentModel::CollectionChangeEventArgs* s_refreshEventArgs; // 0x0

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Int32 NamesEqual(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_NAMESEQUAL_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_List()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_GET_LIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INTERNALDATACOLLECTIONBASE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

