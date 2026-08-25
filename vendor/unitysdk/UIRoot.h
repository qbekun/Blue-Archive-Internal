#pragma once
#include "unitysdk.h"

class Scaling;
namespace UnityEngine { class Transform; }
class Constraint;
namespace UnityEngine { class GameObject; }

#define UIROOT_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0x24375C0)
#define UIROOT_GET_ACTIVESCALING_OFFSET UNITYSDK_OFFSET(0x24375E0)
#define UIROOT_GET_ACTIVEHEIGHT_OFFSET UNITYSDK_OFFSET(0x2437600)
#define UIROOT_GET_PIXELSIZEADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x24366F0)
#define UIROOT_GETPIXELSIZEADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x2437AD0)
#define UIROOT_GETPIXELSIZEADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x2436D50)
#define UIROOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2437B90)
#define UIROOT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2437BC0)
#define UIROOT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2437CB0)
#define UIROOT_START_OFFSET UNITYSDK_OFFSET(0x2437D50)
#define UIROOT_UPDATE_OFFSET UNITYSDK_OFFSET(0x2438030)
#define UIROOT_UPDATESCALE_OFFSET UNITYSDK_OFFSET(0x2437EB0)
#define UIROOT_BROADCAST_OFFSET UNITYSDK_OFFSET(0x2438040)
#define UIROOT_BROADCAST_OFFSET UNITYSDK_OFFSET(0x2438190)
#define UIROOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2438310)
#define UIROOT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2438330)

	inline static constexpr unsigned int UIRoot_TypeDefinitionIndex = 251;

	class UIRoot : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x0
		Scaling* scalingStyle; // 0x18
		::System::Int32 manualWidth; // 0x1C
		::System::Int32 manualHeight; // 0x20
		::System::Int32 minimumHeight; // 0x24
		::System::Int32 maximumHeight; // 0x28
		::System::Boolean fitWidth; // 0x2C
		::System::Boolean fitHeight; // 0x2D
		::System::Boolean adjustByDPI; // 0x2E
		::System::Boolean shrinkPortraitUI; // 0x2F
		::UnityEngine::Transform* mTrans; // 0x30

		Constraint* get_constraint()
		{
			return ((Constraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_GET_CONSTRAINT_OFFSET))(nullptr);
		}

		Scaling* get_activeScaling()
		{
			return ((Scaling*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_GET_ACTIVESCALING_OFFSET))(nullptr);
		}

		::System::Int32 get_activeHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_GET_ACTIVEHEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_pixelSizeAdjustment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_GET_PIXELSIZEADJUSTMENT_OFFSET))(nullptr);
		}

		::System::Single GetPixelSizeAdjustment(::UnityEngine::GameObject* arg)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIROOT_GETPIXELSIZEADJUSTMENT_OFFSET))(arg, nullptr);
		}

		::System::Single GetPixelSizeAdjustment(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIROOT_GETPIXELSIZEADJUSTMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIROOT_UPDATESCALE_OFFSET))(arg, nullptr);
		}

		::System::Void Broadcast(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIROOT_BROADCAST_OFFSET))(str, nullptr);
		}

		::System::Void Broadcast(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UIROOT_BROADCAST_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROOT_.CCTOR_OFFSET))(nullptr);
		}

	};

