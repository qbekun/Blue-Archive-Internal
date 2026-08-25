#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Material; }

#define FXMATERIALANIMATEBASE_CACHEVALUE_OFFSET UNITYSDK_OFFSET(0x20B9C40)
#define FXMATERIALANIMATEBASE_GET_PROPERTYID_OFFSET UNITYSDK_OFFSET(0x20B9C50)
#define FXMATERIALANIMATEBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x20B9C60)
#define FXMATERIALANIMATEBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B9D50)
#define FXMATERIALANIMATEBASE_GET_ANIMATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x20B9F30)
#define FXMATERIALANIMATEBASE_SET_ANIMATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x20B9E70)
#define FXMATERIALANIMATEBASE_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x20B9C90)
#define FXMATERIALANIMATEBASE_BINDMATERIAL_OFFSET UNITYSDK_OFFSET(0x20B9F40)
#define FXMATERIALANIMATEBASE_SET_PROPERTYID_OFFSET UNITYSDK_OFFSET(0x20B9E20)
#define FXMATERIALANIMATEBASE_SAVEORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20B9F90)
#define FXMATERIALANIMATEBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20B9FA0)
#define FXMATERIALANIMATEBASE_REFRESHVALUE_OFFSET UNITYSDK_OFFSET(0x20B9FF0)
#define FXMATERIALANIMATEBASE_START_OFFSET UNITYSDK_OFFSET(0x20BA000)
#define FXMATERIALANIMATEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BA030)
#define FXMATERIALANIMATEBASE_RETURNTOORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x20BA040)

	inline static constexpr unsigned int FxMaterialAnimateBase_TypeDefinitionIndex = 3612;

	class FxMaterialAnimateBase : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0x18
		::System::Boolean IsGetSharedMaterial; // 0x20
		::System::Int32 MaterialIndex; // 0x24
		::System::Boolean GetMaterialInstanceNow; // 0x28
		::UnityEngine::Material* Material; // 0x30
		::System::String* PropertyName; // 0x38
		::System::Int32 _PropertyID; // 0x40
		::UnityEngine::Material* _AnimateMaterial; // 0x48
		::System::Boolean isGetInstanceConsumed; // 0x50

		::System::Void CacheValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_CACHEVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_PropertyID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_GET_PROPERTYID_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_AnimateMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_GET_ANIMATEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_AnimateMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_SET_ANIMATEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMaterial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_REFRESHMATERIAL_OFFSET))(nullptr);
		}

		::System::Void BindMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_BINDMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_PropertyID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_SET_PROPERTYID_OFFSET))(arg, nullptr);
		}

		::System::Void SaveOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_SAVEORIGINVALUE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_REFRESHVALUE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReturnToOriginValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMATERIALANIMATEBASE_RETURNTOORIGINVALUE_OFFSET))(nullptr);
		}

	};

