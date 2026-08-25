#pragma once
#include "unitysdk.h"

#define SMALLXMLNODELIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x99A1A40)
#define SMALLXMLNODELIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x99A16B0)
#define SMALLXMLNODELIST_ADD_OFFSET UNITYSDK_OFFSET(0x99A1D70)
#define SMALLXMLNODELIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x99A20B0)
#define SMALLXMLNODELIST_INSERT_OFFSET UNITYSDK_OFFSET(0x99A2340)
#define SMALLXMLNODELIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x99A1AD0)

	inline static constexpr unsigned int SmallXmlNodeList_TypeDefinitionIndex = 27772;

	class SmallXmlNodeList : public Il2CppObject
	{
	public:
		::System::Object* field; // 0x10

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLXMLNODELIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SMALLXMLNODELIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SMALLXMLNODELIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SMALLXMLNODELIST_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SMALLXMLNODELIST_INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SMALLXMLNODELIST_GETENUMERATOR_OFFSET))(nullptr);
		}

	};

