#pragma once
#include "unitysdk.h"

#define DESIGNEROPTIONCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B7D8C0)
#define DESIGNEROPTIONCOLLECTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B7D9A0)
#define DESIGNEROPTIONCOLLECTION_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B7D9B0)
#define DESIGNEROPTIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x9B7E330)
#define DESIGNEROPTIONCOLLECTION_ENSUREPOPULATED_OFFSET UNITYSDK_OFFSET(0x9B7D900)
#define DESIGNEROPTIONCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B7E380)
#define DESIGNEROPTIONCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B7E3C0)
#define DESIGNEROPTIONCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B7E3D0)

	inline static constexpr unsigned int DesignerOptionCollection_TypeDefinitionIndex = 29549;

	class DesignerOptionCollection : public Il2CppObject
	{
	public:
		::System::ComponentModel::Design::DesignerOptionService* _service; // 0x10
		::System::String* _name; // 0x18
		::System::Object* _value; // 0x20
		::System::Collections::ArrayList* _children; // 0x28
		::System::ComponentModel::PropertyDescriptorCollection* _properties; // 0x30

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCOLLECTION_GET_NAME_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* get_Properties()
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCOLLECTION_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsurePopulated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCOLLECTION_ENSUREPOPULATED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

	};

