#pragma once
#include "unitysdk.h"

class EventBoxGachaInfoGroup;

#define EVENTBOXGACHASCROLLELEMENTGROUP_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x247CFA0)
#define EVENTBOXGACHASCROLLELEMENTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x247D000)
#define EVENTBOXGACHASCROLLELEMENTGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x247D040)

	inline static constexpr unsigned int EventBoxGachaScrollElementGroup_TypeDefinitionIndex = 5675;

	class EventBoxGachaScrollElementGroup : public ::System::Xml::Serialization::XmlAttributes
	{
	public:
		::Il2CppArray<::System::Object*>* _elements; // 0x28

		::Il2CppArray<::System::Object*>* get_Elements()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLELEMENTGROUP_GET_ELEMENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLELEMENTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(EventBoxGachaInfoGroup* arg)
		{
			((::System::Void(*)(EventBoxGachaInfoGroup*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTBOXGACHASCROLLELEMENTGROUP_SETDATA_OFFSET))(arg, nullptr);
		}

	};

