#pragma once
#include "unitysdk.h"

class UILabel;

#define CAFESETGROUPFURNITURESUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2260D20)
#define CAFESETGROUPFURNITURESUNIT_GET_NAMELABEL_OFFSET UNITYSDK_OFFSET(0x2260F50)
#define CAFESETGROUPFURNITURESUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2261170)
#define CAFESETGROUPFURNITURESUNIT_GET_SETCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x22610B0)
#define CAFESETGROUPFURNITURESUNIT_GET_COMFORTLABEL_OFFSET UNITYSDK_OFFSET(0x2261000)
#define CAFESETGROUPFURNITURESUNIT_GETCOLORTAG_OFFSET UNITYSDK_OFFSET(0x2261160)

	inline static constexpr unsigned int CafeSetGroupFurnituresUnit_TypeDefinitionIndex = 4575;

	class CafeSetGroupFurnituresUnit : public ::System::Xml::XmlDateTimeSerializationMode
	{
	public:
		UILabel* nameLabel; // 0x28
		UILabel* setCountLabel; // 0x30
		UILabel* comfortLabel; // 0x38
		::System::String* colorTag_Normal; // 0x40
		::System::String* colorTag_Disable; // 0x48

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		UILabel* get_NameLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESUNIT_GET_NAMELABEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESUNIT_.CTOR_OFFSET))(nullptr);
		}

		UILabel* get_SetCountLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESUNIT_GET_SETCOUNTLABEL_OFFSET))(nullptr);
		}

		UILabel* get_ComfortLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESUNIT_GET_COMFORTLABEL_OFFSET))(nullptr);
		}

		::System::String* GetColorTag(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESUNIT_GETCOLORTAG_OFFSET))(arg, nullptr);
		}

	};

