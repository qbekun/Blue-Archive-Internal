#pragma once
#include "unitysdk.h"

#define IDMANAGER_GETID_OFFSET UNITYSDK_OFFSET(0x000000)
#define IDMANAGER_RETURNID_OFFSET UNITYSDK_OFFSET(0x000000)
#define IDMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IdManager_TypeDefinitionIndex = 24079;

	class IdManager : public Il2CppObject
	{
	public:
		::System::Int32 m_nextIdToTry; // 0x0
		Il2CppObject* m_freeIds; // 0x0

		::System::Int32 GetId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMANAGER_GETID_OFFSET))(nullptr);
		}

		::System::Void ReturnId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IDMANAGER_RETURNID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};

