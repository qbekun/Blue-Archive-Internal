#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define CACHEENTRY_CREATECURVES_OFFSET UNITYSDK_OFFSET(0x2863D60)
#define CACHEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2864240)
#define CACHEENTRY_ADDRAWITEM_OFFSET UNITYSDK_OFFSET(0x28642C0)

	inline static constexpr unsigned int CacheEntry_TypeDefinitionIndex = 34338;

	class CacheEntry : public Il2CppObject
	{
	public:
		CacheCurve* Curve; // 0x10
		Il2CppObject* RawItems; // 0x18

		::System::Void CreateCurves()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEENTRY_CREATECURVES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHEENTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddRawItem(::System::Single arg, ::System::Boolean arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CACHEENTRY_ADDRAWITEM_OFFSET))(arg, arg, arg, nullptr);
		}

	};

