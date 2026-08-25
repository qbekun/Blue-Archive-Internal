#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPToyPlayerPrefsUtil; }

#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA56A0)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9DA5750)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_SETSTRING_OFFSET UNITYSDK_OFFSET(0x9DA5970)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_SETINT_OFFSET UNITYSDK_OFFSET(0x9DA5A80)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x9DA5B90)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9DA5CA0)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_GETINT_OFFSET UNITYSDK_OFFSET(0x9DA5D40)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x9DA5E80)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_HASKEY_OFFSET UNITYSDK_OFFSET(0x9DA5FC0)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x9DA6010)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_DELETEALL_OFFSET UNITYSDK_OFFSET(0x9DA6110)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_SAVE_OFFSET UNITYSDK_OFFSET(0x9DA61E0)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DA6330)
#define NPA_EDITOR_NXPTOYPLAYERPREFSUTIL__DELETEALL_B__14_0_OFFSET UNITYSDK_OFFSET(0x9DA63B0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyPlayerPrefsUtil_TypeDefinitionIndex = 26368;

	class NXPToyPlayerPrefsUtil : public Il2CppObject
	{
	public:
		::NPA::Editor::NXPToyPlayerPrefsUtil* _instance; // 0x0
		::System::Object* syncRoot; // 0x8
		Il2CppObject* dictionary; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::NXPToyPlayerPrefsUtil* get_Instance()
		{
			return (return (::NPA::Editor::NXPToyPlayerPrefsUtil*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void SetString(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_SETSTRING_OFFSET))(str, str, nullptr);
		}

		::System::Void SetInt(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_SETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_GETSTRING_OFFSET))(str, nullptr);
		}

		::System::Int32 GetInt(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_GETINT_OFFSET))(str, nullptr);
		}

		::System::Single GetFloat(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_GETFLOAT_OFFSET))(str, nullptr);
		}

		::System::Boolean HasKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_HASKEY_OFFSET))(str, nullptr);
		}

		::System::Void DeleteKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_DELETEKEY_OFFSET))(str, nullptr);
		}

		::System::Void DeleteAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_DELETEALL_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_SAVE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _DeleteAll_b__14_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYPLAYERPREFSUTIL__DELETEALL_B__14_0_OFFSET))(nullptr);
		}

	};
}

