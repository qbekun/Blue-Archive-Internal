#pragma once
#include "unitysdk.h"

#define ADDTYPEMENUATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x9057B50)
#define ADDTYPEMENUATTRIBUTE_GET_MENUNAME_OFFSET UNITYSDK_OFFSET(0x9057B60)
#define ADDTYPEMENUATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9057B70)
#define ADDTYPEMENUATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9057BB0)
#define ADDTYPEMENUATTRIBUTE_GETTYPENAMEWITHOUTPATH_OFFSET UNITYSDK_OFFSET(0x9057C40)
#define ADDTYPEMENUATTRIBUTE_GETSPLITTEDMENUNAME_OFFSET UNITYSDK_OFFSET(0x9057C80)

	inline static constexpr unsigned int AddTypeMenuAttribute_TypeDefinitionIndex = 38100;

	class AddTypeMenuAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _MenuName_k__BackingField; // 0x10
		::System::Int32 _Order_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* k_Separeters; // 0x0

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDTYPEMENUATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

		::System::String* get_MenuName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDTYPEMENUATTRIBUTE_GET_MENUNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ADDTYPEMENUATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDTYPEMENUATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetTypeNameWithoutPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDTYPEMENUATTRIBUTE_GETTYPENAMEWITHOUTPATH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSplittedMenuName()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDTYPEMENUATTRIBUTE_GETSPLITTEDMENUNAME_OFFSET))(nullptr);
		}

	};

