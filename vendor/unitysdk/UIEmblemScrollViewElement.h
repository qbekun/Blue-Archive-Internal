#pragma once
#include "unitysdk.h"

class UIEmblemParcel;

#define UIEMBLEMSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x23EBE40)
#define UIEMBLEMSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23EC040)
#define UIEMBLEMSCROLLVIEWELEMENT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x23EC080)
#define UIEMBLEMSCROLLVIEWELEMENT_TRYGETEMBLEM_OFFSET UNITYSDK_OFFSET(0x23EBAC0)

	inline static constexpr unsigned int UIEmblemScrollViewElement_TypeDefinitionIndex = 5401;

	class UIEmblemScrollViewElement : public ::System::Xml::XmlConvert
	{
	public:
		::Il2CppArray<::System::Object*>* Emblems; // 0x28

		::System::Void SetData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		UIEmblemParcel* get_Item(::System::Int32 arg)
		{
			return ((UIEmblemParcel*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWELEMENT_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetEmblem(::System::Int64 arg, UIEmblemParcel&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, UIEmblemParcel&*, ::PVOID))((::PBYTE)hIl2Cpp + UIEMBLEMSCROLLVIEWELEMENT_TRYGETEMBLEM_OFFSET))(arg, arg2, nullptr);
		}

	};

