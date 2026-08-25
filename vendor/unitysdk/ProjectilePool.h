#pragma once
#include "unitysdk.h"

class ProjectileVisual;

#define PROJECTILEPOOL_RESTORE_OFFSET UNITYSDK_OFFSET(0x15A9980)
#define PROJECTILEPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A9AB0)
#define PROJECTILEPOOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15A9B10)
#define PROJECTILEPOOL_AWAKE_OFFSET UNITYSDK_OFFSET(0x15A9C40)
#define PROJECTILEPOOL_GETPROJECTILE_OFFSET UNITYSDK_OFFSET(0x15A9CE0)
#define PROJECTILEPOOL_CREATEPROJECTILECACHE_OFFSET UNITYSDK_OFFSET(0x15A9E20)

	inline static constexpr unsigned int ProjectilePool_TypeDefinitionIndex = 1103;

	class ProjectilePool : public ::ToyWebViewShared::Messages::RequestDeleteAllCookie
	{
	public:
		Il2CppObject* projectilePool; // 0x20

		::System::Void Restore(ProjectileVisual* arg)
		{
			((::System::Void(*)(ProjectileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEPOOL_RESTORE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEPOOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEPOOL_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEPOOL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void GetProjectile(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEPOOL_GETPROJECTILE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CreateProjectileCache(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PROJECTILEPOOL_CREATEPROJECTILECACHE_OFFSET))(str, arg, nullptr);
		}

	};

