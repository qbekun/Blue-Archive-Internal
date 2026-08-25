#pragma once
#include "unitysdk.h"

#define TEXTBACKINGCONTAINER_RESIZE_OFFSET UNITYSDK_OFFSET(0xA17E960)
#define TEXTBACKINGCONTAINER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA17E9B0)
#define TEXTBACKINGCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17E9E0)
#define TEXTBACKINGCONTAINER_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xA17EA40)
#define TEXTBACKINGCONTAINER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA17EA50)
#define TEXTBACKINGCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA17EAD0)
#define TEXTBACKINGCONTAINER_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xA17EAE0)

	inline static constexpr unsigned int TextBackingContainer_TypeDefinitionIndex = 33746;

	class TextBackingContainer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Array; // 0x10
		::System::Int32 m_Count; // 0x18

		::System::Void Resize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTBACKINGCONTAINER_RESIZE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Item(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTBACKINGCONTAINER_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTBACKINGCONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTBACKINGCONTAINER_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TEXTBACKINGCONTAINER_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTBACKINGCONTAINER_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TEXTBACKINGCONTAINER_GET_CAPACITY_OFFSET))(nullptr);
		}

	};

