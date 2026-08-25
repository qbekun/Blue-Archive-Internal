#pragma once
#include "unitysdk.h"

#define MONOSINGLETON`1_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONOSINGLETON`1_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONOSINGLETON`1_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONOSINGLETON`1_ISEXISTINSTANCEINSCENE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONOSINGLETON`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONOSINGLETON`1_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONOSINGLETON`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONOSINGLETON`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONOSINGLETON`1_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int MonoSingleton`1_TypeDefinitionIndex = 3554;

	class MonoSingleton`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _instance; // 0x0
		::System::Boolean _alive; // 0x0
		::System::Object* _lock; // 0x0

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Instance()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_GET_ISALIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsExistInstanceInScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_ISEXISTINSTANCEINSCENE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_RELEASE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONOSINGLETON`1_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

	};

