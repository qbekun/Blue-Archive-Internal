#pragma once
#include "unitysdk.h"

class CharacterObject;
class FixedEchelonObject;

#define FIXEDECHELONSETTINGOBJECT_FINDMAINCHARACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x1EEA7B0)
#define FIXEDECHELONSETTINGOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EEA980)
#define FIXEDECHELONSETTINGOBJECT_GETTSAINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x1EEA990)
#define FIXEDECHELONSETTINGOBJECT_INITIALIZEFIXEDECHELONSETTING_OFFSET UNITYSDK_OFFSET(0x1EEAA80)
#define FIXEDECHELONSETTINGOBJECT_GETFIXEDECHELONOBJECT_OFFSET UNITYSDK_OFFSET(0x1EEAA10)
#define FIXEDECHELONSETTINGOBJECT_GETMAINCHARACTEROBJECTS_OFFSET UNITYSDK_OFFSET(0x1EEA900)
#define FIXEDECHELONSETTINGOBJECT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1EEBEC0)
#define FIXEDECHELONSETTINGOBJECT_GETSUPPORTCHARACTEROBJECTS_OFFSET UNITYSDK_OFFSET(0x1EEBEE0)
#define FIXEDECHELONSETTINGOBJECT_GETLEADERID_OFFSET UNITYSDK_OFFSET(0x1EEBF60)
#define FIXEDECHELONSETTINGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EEBFE0)
#define FIXEDECHELONSETTINGOBJECT_FINDSUPPORTCHARACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x1EEBFF0)

	inline static constexpr unsigned int FixedEchelonSettingObject_TypeDefinitionIndex = 1877;

	class FixedEchelonSettingObject : public Il2CppObject
	{
	public:
		Il2CppObject* FixedEchelonObjects; // 0x10

		CharacterObject* FindMainCharacterObject(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((CharacterObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_FINDMAINCHARACTEROBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Int64 GetTSAInteractionServerId(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_GETTSAINTERACTIONSERVERID_OFFSET))(arg, nullptr);
		}

		FixedEchelonObject* InitializeFixedEchelonSetting(::System::Int64 arg)
		{
			return ((FixedEchelonObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_INITIALIZEFIXEDECHELONSETTING_OFFSET))(arg, nullptr);
		}

		FixedEchelonObject* GetFixedEchelonObject(::System::Int64 arg)
		{
			return ((FixedEchelonObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_GETFIXEDECHELONOBJECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMainCharacterObjects(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_GETMAINCHARACTEROBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_RELEASE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSupportCharacterObjects(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_GETSUPPORTCHARACTEROBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLeaderId(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_GETLEADERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_.CTOR_OFFSET))(nullptr);
		}

		CharacterObject* FindSupportCharacterObject(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((CharacterObject*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDECHELONSETTINGOBJECT_FINDSUPPORTCHARACTEROBJECT_OFFSET))(arg, arg2, nullptr);
		}

	};

