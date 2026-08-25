#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_PLAYERPREFSDATACACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D863E0)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_SAVEDATAJSON_OFFSET UNITYSDK_OFFSET(0x9D86480)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_SETSTRING_OFFSET UNITYSDK_OFFSET(0x9D86520)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_SETINT_OFFSET UNITYSDK_OFFSET(0x9D86570)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x9D865D0)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9D86630)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_GETINT_OFFSET UNITYSDK_OFFSET(0x9D866A0)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x9D86710)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_HASKEY_OFFSET UNITYSDK_OFFSET(0x9D86790)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x9D867D0)
#define NPA_EDITOR_PLAYERPREFSDATACACHE_DELETEALL_OFFSET UNITYSDK_OFFSET(0x9D86840)
#define NPA_EDITOR_PLAYERPREFSDATACACHE__SAVEDATAJSON_B__3_0_OFFSET UNITYSDK_OFFSET(0x9D86910)
#define NPA_EDITOR_PLAYERPREFSDATACACHE__DELETEALL_B__12_0_OFFSET UNITYSDK_OFFSET(0x9D86950)

namespace NPA::Editor
{
	inline static constexpr unsigned int PlayerPrefsDataCache_TypeDefinitionIndex = 26277;

	class PlayerPrefsDataCache : public Il2CppObject
	{
	public:
		::NPA::SimpleJSON::JSONNode* _dataJson; // 0x10
		::System::String* _prefName; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void SaveDataJson()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_SAVEDATAJSON_OFFSET))(nullptr);
		}

		::System::Void SetString(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_SETSTRING_OFFSET))(str, str, nullptr);
		}

		::System::Void SetInt(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_SETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetString(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_GETSTRING_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetInt(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_GETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Single GetFloat(::System::String* str, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_GETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_HASKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean DeleteKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_DELETEKEY_OFFSET))(str, nullptr);
		}

		::System::Void DeleteAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE_DELETEALL_OFFSET))(nullptr);
		}

		::System::Void _SaveDataJson_b__3_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE__SAVEDATAJSON_B__3_0_OFFSET))(nullptr);
		}

		::System::Void _DeleteAll_b__12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLAYERPREFSDATACACHE__DELETEALL_B__12_0_OFFSET))(nullptr);
		}

	};
}

