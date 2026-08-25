#pragma once
#include "unitysdk.h"

#define XMLEVENT_INITEVENT_OFFSET UNITYSDK_OFFSET(0x99649A0)
#define XMLEVENT_INITEVENT_OFFSET UNITYSDK_OFFSET(0x9964860)
#define XMLEVENT_INITEVENT_OFFSET UNITYSDK_OFFSET(0x9964880)
#define XMLEVENT_INITEVENT_OFFSET UNITYSDK_OFFSET(0x99648C0)
#define XMLEVENT_INITEVENT_OFFSET UNITYSDK_OFFSET(0x9964910)
#define XMLEVENT_INITEVENT_OFFSET UNITYSDK_OFFSET(0x9964980)
#define XMLEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x99649B0)
#define XMLEVENT_GET_STRING1_OFFSET UNITYSDK_OFFSET(0x99649C0)
#define XMLEVENT_GET_STRING2_OFFSET UNITYSDK_OFFSET(0x99649D0)
#define XMLEVENT_GET_STRING3_OFFSET UNITYSDK_OFFSET(0x99649E0)
#define XMLEVENT_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x99649F0)

	inline static constexpr unsigned int XmlEvent_TypeDefinitionIndex = 27676;

	class XmlEvent : public Il2CppObject
	{
	public:
		XmlEventType* eventType; // 0x10
		::System::String* s1; // 0x18
		::System::String* s2; // 0x20
		::System::String* s3; // 0x28
		::System::Object* o; // 0x30

		::System::Void InitEvent(XmlEventType* arg)
		{
			((::System::Void(*)(XmlEventType*, ::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_INITEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void InitEvent(XmlEventType* arg, ::System::String* str)
		{
			((::System::Void(*)(XmlEventType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_INITEVENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void InitEvent(XmlEventType* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(XmlEventType*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_INITEVENT_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void InitEvent(XmlEventType* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(XmlEventType*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_INITEVENT_OFFSET))(arg, str, str, str, nullptr);
		}

		::System::Void InitEvent(XmlEventType* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(XmlEventType*, ::System::String*, ::System::String*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_INITEVENT_OFFSET))(arg, str, str, str, arg, nullptr);
		}

		::System::Void InitEvent(XmlEventType* arg, ::System::Object* arg)
		{
			((::System::Void(*)(XmlEventType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_INITEVENT_OFFSET))(arg, arg, nullptr);
		}

		XmlEventType* get_EventType()
		{
			return (return (XmlEventType*(*)(::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_GET_EVENTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_String1()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_GET_STRING1_OFFSET))(nullptr);
		}

		::System::String* get_String2()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_GET_STRING2_OFFSET))(nullptr);
		}

		::System::String* get_String3()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_GET_STRING3_OFFSET))(nullptr);
		}

		::System::Object* get_Object()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XMLEVENT_GET_OBJECT_OFFSET))(nullptr);
		}

	};

