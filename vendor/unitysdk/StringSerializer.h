#pragma once
#include "unitysdk.h"

#define STRINGSERIALIZER_GETSERIALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x9270010)
#define STRINGSERIALIZER_GETDESERIALIZEDTIMEZONEINFO_OFFSET UNITYSDK_OFFSET(0x926FB80)
#define STRINGSERIALIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9274300)
#define STRINGSERIALIZER_SERIALIZESUBSTITUTE_OFFSET UNITYSDK_OFFSET(0x9274010)
#define STRINGSERIALIZER_SERIALIZETRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x92740D0)
#define STRINGSERIALIZER_VERIFYISESCAPABLECHARACTER_OFFSET UNITYSDK_OFFSET(0x9274890)
#define STRINGSERIALIZER_SKIPVERSIONNEXTDATAFIELDS_OFFSET UNITYSDK_OFFSET(0x9274930)
#define STRINGSERIALIZER_GETNEXTSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x9274330)
#define STRINGSERIALIZER_GETNEXTDATETIMEVALUE_OFFSET UNITYSDK_OFFSET(0x9274B00)
#define STRINGSERIALIZER_GETNEXTTIMESPANVALUE_OFFSET UNITYSDK_OFFSET(0x92745D0)
#define STRINGSERIALIZER_GETNEXTINT32VALUE_OFFSET UNITYSDK_OFFSET(0x9274C10)
#define STRINGSERIALIZER_GETNEXTADJUSTMENTRULEARRAYVALUE_OFFSET UNITYSDK_OFFSET(0x92746F0)
#define STRINGSERIALIZER_GETNEXTADJUSTMENTRULEVALUE_OFFSET UNITYSDK_OFFSET(0x9274CF0)
#define STRINGSERIALIZER_GETNEXTTRANSITIONTIMEVALUE_OFFSET UNITYSDK_OFFSET(0x92751C0)

	inline static constexpr unsigned int StringSerializer_TypeDefinitionIndex = 23673;

	class StringSerializer : public Il2CppObject
	{
	public:
		::System::String* _serializedText; // 0x10
		::System::Int32 _currentTokenStartIndex; // 0x18
		State* _state; // 0x1C

		::System::String* GetSerializedString(::System::TimeZoneInfo* arg)
		{
			return (return (::System::String*(*)(::System::TimeZoneInfo*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETSERIALIZEDSTRING_OFFSET))(arg, nullptr);
		}

		::System::TimeZoneInfo* GetDeserializedTimeZoneInfo(::System::String* str)
		{
			return (return (::System::TimeZoneInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETDESERIALIZEDTIMEZONEINFO_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void SerializeSubstitute(::System::String* str, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_SERIALIZESUBSTITUTE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SerializeTransitionTime(TransitionTime* arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(TransitionTime*, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_SERIALIZETRANSITIONTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void VerifyIsEscapableCharacter(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_VERIFYISESCAPABLECHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void SkipVersionNextDataFields(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_SKIPVERSIONNEXTDATAFIELDS_OFFSET))(arg, nullptr);
		}

		::System::String* GetNextStringValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETNEXTSTRINGVALUE_OFFSET))(nullptr);
		}

		::System::DateTime* GetNextDateTimeValue(::System::String* str)
		{
			return (return (::System::DateTime*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETNEXTDATETIMEVALUE_OFFSET))(str, nullptr);
		}

		::System::TimeSpan* GetNextTimeSpanValue()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETNEXTTIMESPANVALUE_OFFSET))(nullptr);
		}

		::System::Int32 GetNextInt32Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETNEXTINT32VALUE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNextAdjustmentRuleArrayValue()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETNEXTADJUSTMENTRULEARRAYVALUE_OFFSET))(nullptr);
		}

		AdjustmentRule* GetNextAdjustmentRuleValue()
		{
			return (return (AdjustmentRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETNEXTADJUSTMENTRULEVALUE_OFFSET))(nullptr);
		}

		TransitionTime* GetNextTransitionTimeValue()
		{
			return (return (TransitionTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRINGSERIALIZER_GETNEXTTRANSITIONTIMEVALUE_OFFSET))(nullptr);
		}

	};

