#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_EDITOR_NXPTOYPREFS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D85DB0)
#define NPA_EDITOR_NXPTOYPREFS_SAVEDATAJSON_OFFSET UNITYSDK_OFFSET(0x9D85E70)
#define NPA_EDITOR_NXPTOYPREFS_SETSTRING_OFFSET UNITYSDK_OFFSET(0x9D85F10)
#define NPA_EDITOR_NXPTOYPREFS_SETINT_OFFSET UNITYSDK_OFFSET(0x9D85F60)
#define NPA_EDITOR_NXPTOYPREFS_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x9D85FC0)
#define NPA_EDITOR_NXPTOYPREFS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9D86020)
#define NPA_EDITOR_NXPTOYPREFS_GETINT_OFFSET UNITYSDK_OFFSET(0x9D86090)
#define NPA_EDITOR_NXPTOYPREFS_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x9D86100)
#define NPA_EDITOR_NXPTOYPREFS_HASKEY_OFFSET UNITYSDK_OFFSET(0x9D86180)
#define NPA_EDITOR_NXPTOYPREFS_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x9D861C0)
#define NPA_EDITOR_NXPTOYPREFS_DELETEALL_OFFSET UNITYSDK_OFFSET(0x9D86230)
#define NPA_EDITOR_NXPTOYPREFS__SAVEDATAJSON_B__3_0_OFFSET UNITYSDK_OFFSET(0x9D86300)
#define NPA_EDITOR_NXPTOYPREFS__DELETEALL_B__12_0_OFFSET UNITYSDK_OFFSET(0x9D86340)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyPrefs_TypeDefinitionIndex = 26275;

	class NXPToyPrefs : public Il2CppObject
	{
	public:
		::NPA::SimpleJSON::JSONNode* dataJson; // 0x10
		::System::String* prefName; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void SaveDataJson()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_SAVEDATAJSON_OFFSET))(nullptr);
		}

		::System::Void SetString(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_SETSTRING_OFFSET))(str, str, nullptr);
		}

		::System::Void SetInt(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_SETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetString(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_GETSTRING_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetInt(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_GETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Single GetFloat(::System::String* str, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_GETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_HASKEY_OFFSET))(str, nullptr);
		}

		::System::Void DeleteKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_DELETEKEY_OFFSET))(str, nullptr);
		}

		::System::Void DeleteAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS_DELETEALL_OFFSET))(nullptr);
		}

		::System::Void _SaveDataJson_b__3_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS__SAVEDATAJSON_B__3_0_OFFSET))(nullptr);
		}

		::System::Void _DeleteAll_b__12_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPREFS__DELETEALL_B__12_0_OFFSET))(nullptr);
		}

	};
}

