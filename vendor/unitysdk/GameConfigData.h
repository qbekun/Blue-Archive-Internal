#pragma once
#include "unitysdk.h"

class GameConfigData;

#define GAMECONFIGDATA_GET_NUMBERTABLE_OFFSET UNITYSDK_OFFSET(0x1FC29B0)
#define GAMECONFIGDATA_GET_STRINGTABLE_OFFSET UNITYSDK_OFFSET(0x1FC29C0)
#define GAMECONFIGDATA_GET_BOOLTABLE_OFFSET UNITYSDK_OFFSET(0x1FC29D0)
#define GAMECONFIGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1CD0)
#define GAMECONFIGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FC29E0)
#define GAMECONFIGDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FC15D0)
#define GAMECONFIGDATA_SET_OFFSET UNITYSDK_OFFSET(0x1FC1750)
#define GAMECONFIGDATA_SET_OFFSET UNITYSDK_OFFSET(0x1FC1800)
#define GAMECONFIGDATA_SET_OFFSET UNITYSDK_OFFSET(0x1FC18B0)
#define GAMECONFIGDATA_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1FC25D0)
#define GAMECONFIGDATA_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x1FC2B20)
#define GAMECONFIGDATA_FINDFIRSTKEY_OFFSET UNITYSDK_OFFSET(0x1FC26F0)
#define GAMECONFIGDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FC1BB0)

	inline static constexpr unsigned int GameConfigData_TypeDefinitionIndex = 2950;

	class GameConfigData : public Il2CppObject
	{
	public:
		Il2CppObject* numberTable; // 0x10
		Il2CppObject* stringTable; // 0x18
		Il2CppObject* boolTable; // 0x20

		Il2CppObject* get_NumberTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_GET_NUMBERTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_StringTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_GET_STRINGTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_BoolTable()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_GET_BOOLTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(GameConfigData* arg)
		{
			((::System::Void(*)(GameConfigData*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_SET_OFFSET))(str, str2, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ContainsKey(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_CONTAINSKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean ContainsValue(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_CONTAINSVALUE_OFFSET))(str, nullptr);
		}

		::System::String* FindFirstKey(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_FINDFIRSTKEY_OFFSET))(str, nullptr);
		}

		::System::Void Clear(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + GAMECONFIGDATA_CLEAR_OFFSET))(str, nullptr);
		}

	};

