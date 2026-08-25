#pragma once
#include "unitysdk.h"

class TextType;
class LabelAlign;

#define SCENARIOSCREENTEXTINFO_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1EE2F60)
#define SCENARIOSCREENTEXTINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EE2F70)
#define SCENARIOSCREENTEXTINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EE2F80)
#define SCENARIOSCREENTEXTINFO_GET_HASHCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1EE2F90)
#define SCENARIOSCREENTEXTINFO_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1EE2FA0)
#define SCENARIOSCREENTEXTINFO_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1EE2FB0)
#define SCENARIOSCREENTEXTINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EE2FC0)
#define SCENARIOSCREENTEXTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EE2BA0)
#define SCENARIOSCREENTEXTINFO_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EE3190)
#define SCENARIOSCREENTEXTINFO_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1EE31A0)
#define SCENARIOSCREENTEXTINFO__.CTOR_G__HANDLELOGCOMMAND|0_0_OFFSET UNITYSDK_OFFSET(0x1EE2FD0)
#define SCENARIOSCREENTEXTINFO_SET_LOGTEXT_OFFSET UNITYSDK_OFFSET(0x1EE31B0)
#define SCENARIOSCREENTEXTINFO_GET_HASLOG_OFFSET UNITYSDK_OFFSET(0x1EE31C0)
#define SCENARIOSCREENTEXTINFO_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EE31D0)
#define SCENARIOSCREENTEXTINFO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EE31E0)
#define SCENARIOSCREENTEXTINFO_GET_LOGTEXT_OFFSET UNITYSDK_OFFSET(0x1EE31F0)
#define SCENARIOSCREENTEXTINFO_SET_HASHCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1EE3200)
#define SCENARIOSCREENTEXTINFO_SET_ISNARRAITION_OFFSET UNITYSDK_OFFSET(0x1EE3210)
#define SCENARIOSCREENTEXTINFO_SET_HASLOG_OFFSET UNITYSDK_OFFSET(0x1EE3220)
#define SCENARIOSCREENTEXTINFO_GET_ISNARRAITION_OFFSET UNITYSDK_OFFSET(0x1EE3230)

	inline static constexpr unsigned int ScenarioScreenTextInfo_TypeDefinitionIndex = 1859;

	class ScenarioScreenTextInfo : public Il2CppObject
	{
	public:
		TextType* _Type_k__BackingField; // 0x10
		Il2CppObject* _Position_k__BackingField; // 0x18
		LabelAlign* _Alignment_k__BackingField; // 0x20
		::System::Int32 _FontSize_k__BackingField; // 0x24
		::System::String* _Text_k__BackingField; // 0x28
		::System::Boolean _HasLog_k__BackingField; // 0x30
		::System::String* _LogText_k__BackingField; // 0x38
		::System::String* _HashCharacterName_k__BackingField; // 0x40
		::System::Boolean _IsNarraition_k__BackingField; // 0x48

		::System::Int32 get_FontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_FONTSIZE_OFFSET))(nullptr);
		}

		TextType* get_Type()
		{
			return ((TextType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(TextType* arg)
		{
			((::System::Void(*)(TextType*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_HashCharacterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_HASHCHARACTERNAME_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_TEXT_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Position()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(LabelAlign* arg, ::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4, ::System::Int32 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(LabelAlign*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_.CTOR_OFFSET))(arg, str, str2, str3, str4, arg2, arg3, nullptr);
		}

		::System::Void set_Alignment(LabelAlign* arg)
		{
			((::System::Void(*)(LabelAlign*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_ALIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_FontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::System::String* _.ctor_g__HandleLogCommand|0_0(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO__.CTOR_G__HANDLELOGCOMMAND|0_0_OFFSET))(str, nullptr);
		}

		::System::Void set_LogText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_LOGTEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_HasLog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_HASLOG_OFFSET))(nullptr);
		}

		LabelAlign* get_Alignment()
		{
			return ((LabelAlign*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_ALIGNMENT_OFFSET))(nullptr);
		}

		::System::Void set_Position(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::String* get_LogText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_LOGTEXT_OFFSET))(nullptr);
		}

		::System::Void set_HashCharacterName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_HASHCHARACTERNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_IsNarraition(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_ISNARRAITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasLog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_SET_HASLOG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNarraition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSCREENTEXTINFO_GET_ISNARRAITION_OFFSET))(nullptr);
		}

	};

